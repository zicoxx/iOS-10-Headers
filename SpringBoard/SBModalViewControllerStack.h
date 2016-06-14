//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIViewController, _SBModalViewControllerStackTransition;

@interface SBModalViewControllerStack : NSObject
{
    id <SBModalViewControllerStackDelegate> _delegate;
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    _SBModalViewControllerStackTransition *_pendingTransition;
}

@property(nonatomic) __weak id <SBModalViewControllerStackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_noteDidDismissViewController:(id)arg1;
- (void)_noteWillDismissViewController:(id)arg1;
- (void)_noteDidPresentViewController:(id)arg1;
- (void)_noteWillPresentViewController:(id)arg1;
- (void)_removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPendingTransitionIfNecessary;
- (void)_queuePendingTransition:(id)arg1;
- (void)_setCurrentTransition:(id)arg1;
- (void)_setPendingTransition:(id)arg1;
- (void)removeViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIViewController *topViewController; // @dynamic topViewController;
@property(readonly, nonatomic) NSArray *viewControllers; // @dynamic viewControllers;
- (id)initWithPresentingViewController:(id)arg1;

@end
