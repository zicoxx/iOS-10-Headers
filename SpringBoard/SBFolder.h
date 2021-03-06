//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconIndexMutableListObserver.h"
#import "SBIconIndexNode.h"
#import "SBIconListModelObserver.h"
#import "SBTreeNode.h"

@class NSArray, NSCountedSet, NSHashTable, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver>
{
    NSString *_displayName;
    NSString *_defaultDisplayName;
    BOOL _displayNameDirty;
    BOOL _open;
    SBFolderIcon *_icon;
    BOOL _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    unsigned int _maxListCount;
    unsigned int _maxIconCountInLists;
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
    SBFolder *_parentFolder;
}

+ (BOOL)isRootFolderClass;
@property(readonly, nonatomic) unsigned int maxIconCountInLists; // @synthesize maxIconCountInLists=_maxIconCountInLists;
@property(nonatomic) __weak SBFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(nonatomic, getter=isCancelable) BOOL cancelable; // @synthesize cancelable=_cancelable;
@property(nonatomic) __weak SBFolderIcon *icon; // @synthesize icon=_icon;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
@property(readonly, nonatomic) __weak id <SBTreeNode> parent;
@property(readonly, nonatomic) NSArray *children;
- (void)didRemoveFolder:(id)arg1;
- (void)didAddFolder:(id)arg1;
- (void)sort;
- (void)enumerateAllIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(BOOL)arg2;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (BOOL)_isCoalescingContentChanges;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)iconAtIndexPath:(id)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (id)indexPathForIcon:(id)arg1 includingPlaceholders:(BOOL)arg2;
- (id)indexPathForIcon:(id)arg1;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (id)listContainingIcon:(id)arg1;
- (id)orderedIcons;
- (id)visibleIcons;
- (id)folderIcons;
- (id)leafIcons;
- (id)allIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg1;
- (id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned int)arg2 iconIndex:(unsigned int)arg3;
- (id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2;
- (BOOL)canAddIcon;
- (id)addIcon:(id)arg1;
- (void)removeIconAtIndexPath:(id)arg1;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2;
- (id)placeIcon:(id)arg1 atIndexPath:(id *)arg2;
- (void)purgeLists;
- (unsigned int)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned int)arg1;
- (id)_createNewListWithIcon:(id)arg1;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (void)removeEmptyList:(id)arg1;
- (id)addEmptyList;
- (void)_removeLists:(id)arg1;
- (void)_setLists:(id)arg1;
- (void)_addList:(id)arg1;
- (void)compactIconsAndLists;
- (BOOL)_compactLists;
- (BOOL)compactLists;
- (id)_listsForCompaction;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;
- (BOOL)shouldRemoveWhenEmpty;
- (BOOL)isFull;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned int maxListCount;
@property(readonly, nonatomic) unsigned int listCount;
@property(readonly, copy, nonatomic) NSArray *lists;
- (void)setDefaultDisplayName:(id)arg1;
- (id)defaultDisplayName;
- (void)removeFolderObserver:(id)arg1;
- (void)addFolderObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMaxListCount:(unsigned int)arg1 maxIconCountInLists:(unsigned int)arg2;
- (Class)listModelClass;
- (BOOL)isRootFolder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

