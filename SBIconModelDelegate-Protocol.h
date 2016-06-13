//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSIndexPath, NSString, SBApplication, SBIcon, SBIconModel, SBRootFolder, UIWebClip;

@protocol SBIconModelDelegate <NSObject>
- (NSIndexPath *)iconModel:(SBIconModel *)arg1 customInsertionIndexPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (NSDictionary *)placeholdersByDisplayIDForIconModel:(SBIconModel *)arg1;
- (SBApplication *)iconModel:(SBIconModel *)arg1 applicationWithBundleIdentifier:(NSString *)arg2;
- (BOOL)canAddDownloadingIconForApplication:(SBApplication *)arg1;
- (BOOL)canAddWebClip:(UIWebClip *)arg1;
- (BOOL)supportsDock;
- (unsigned int)maxColCountForListInRootFolderWithInterfaceOrientation:(int)arg1;
- (unsigned int)maxRowCountForListInRootFolderWithInterfaceOrientation:(int)arg1;
- (unsigned int)maxIconCountForDock;
- (unsigned int)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned int)maxListCountForFolders;

@optional
- (void)didDeleteIconState:(SBIconModel *)arg1;
- (void)didSaveIconState:(SBIconModel *)arg1;
- (BOOL)canSaveIconState:(SBIconModel *)arg1;
- (void)willUnarchiveIconModel:(SBIconModel *)arg1 withMetadata:(NSDictionary *)arg2;
@end
