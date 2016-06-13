//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

#import "SBProcessSettings.h"

@class NSSet, NSString, SBApplication, SBProcessSettings;

@interface SBWorkspaceApplication : SBWorkspaceEntity <SBProcessSettings>
{
    SBApplication *_application;
    NSSet *_actions;
    SBProcessSettings *_processSettings;
}

+ (id)entityForApplication:(id)arg1 actions:(id)arg2;
+ (id)entityForApplication:(id)arg1;
+ (CDUnknownBlockType)entityGenerator;
@property(readonly, nonatomic) SBProcessSettings *processSettings; // @synthesize processSettings=_processSettings;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (Class)viewControllerClass;
- (id)workspaceApplication;
- (BOOL)isApplicationEntity;
- (int)_mainDisplayPreferredInterfaceOrientation;
- (void)_setMainDisplayPreferredInterfaceOrientation:(int)arg1;
- (CDUnknownBlockType)_generator;
- (BOOL)_supportsDynamicResizing;
- (BOOL)_supportsPresentationAtAnySize;
- (BOOL)_supportsLayoutRole:(int)arg1;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)representedDisplay;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(int)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(int)arg2;
- (BOOL)boolForProcessSetting:(int)arg1;
- (int)flagForProcessSetting:(int)arg1;
- (void)setFlag:(int)arg1 forProcessSetting:(int)arg2;
- (id)initWithApplication:(id)arg1 actions:(id)arg2;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
