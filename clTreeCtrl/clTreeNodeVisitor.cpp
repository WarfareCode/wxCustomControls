#include "clTreeNodeVisitor.h"

clTreeNodeVisitor::clTreeNodeVisitor() {}

clTreeNodeVisitor::~clTreeNodeVisitor() {}

void clTreeNodeVisitor::Visit(
    clTreeCtrlNode* item, bool expandedItemsOnly, std::function<bool(clTreeCtrlNode*, bool)>& func)
{
    // find the first entry
    std::vector<std::pair<clTreeCtrlNode*, bool>> V;
    // find the root item
    clTreeCtrlNode* root = item;
    if(!root) { return; }
    while(root->GetParent()) { root = root->GetParent(); }

    V.push_back({ root, true });

    // Now count all the visible children, i.e. the non collapsed ones
    bool foundEntryPoint = false;
    while(!V.empty()) {
        clTreeCtrlNode* p = V[0].first;
        bool visibleItem = V[0].second;
        V.erase(V.begin());
        // Once we found the entry point for this visit, we can start notifying the caller
        if(!foundEntryPoint) { foundEntryPoint = (p == item); }
        if(foundEntryPoint && !func(p, visibleItem)) { return; }

        // Add the children
        if(p->HasChildren() && (p->IsExpanded() || !expandedItemsOnly)) {
            bool hiddenItems = !p->IsExpanded();
            const std::vector<clTreeCtrlNode::Ptr_t>& children = p->GetChildren();
            std::vector<std::pair<clTreeCtrlNode*, bool>> childrenV;
            for(size_t i = 0; i < children.size(); ++i) {
                clTreeCtrlNode::Ptr_t child = children[i];
                childrenV.push_back({ child.get(), hiddenItems });
            }
            V.insert(V.begin(), childrenV.begin(), childrenV.end());
        }
    }
}

void clTreeNodeVisitor::VisitChildren(
    clTreeCtrlNode* item, bool expandedItemsOnly, std::function<bool(clTreeCtrlNode*, bool)>& func)
{
    std::vector<std::pair<clTreeCtrlNode*, bool>> V;
    clTreeCtrlNode* root = item;
    if(!root) { return; }
    V.push_back({ root, true });

    // Now count all the visible children, i.e. the non collapsed ones
    while(!V.empty()) {
        clTreeCtrlNode* p = V[0].first;
        bool visibleItem = V[0].second;
        V.erase(V.begin());
        if(!func(p, visibleItem)) { return; }

        // Add the children
        if(p->HasChildren() && (p->IsExpanded() || !expandedItemsOnly)) {
            bool hiddenItems = !p->IsExpanded();
            const std::vector<clTreeCtrlNode::Ptr_t>& children = p->GetChildren();
            std::vector<std::pair<clTreeCtrlNode*, bool>> childrenV;
            for(size_t i = 0; i < children.size(); ++i) {
                clTreeCtrlNode::Ptr_t child = children[i];
                childrenV.push_back({ child.get(), hiddenItems });
            }
            V.insert(V.begin(), childrenV.begin(), childrenV.end());
        }
    }
}
