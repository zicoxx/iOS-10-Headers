//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SBDashBoardEvent : NSObject
{
    BOOL _consumable;
    int _type;
    NSNumber *_value;
}

+ (id)eventWithType:(int)arg1;
@property(nonatomic, getter=isConsumable) BOOL consumable; // @synthesize consumable=_consumable;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

