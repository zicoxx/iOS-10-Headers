//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBRowInfo, SBSectionInfo;

@interface SBInfoOperand : NSObject
{
    SBSectionInfo *_section;
    SBRowInfo *_row;
}

+ (id)operandWithSection:(id)arg1 row:(id)arg2;
@property(readonly, nonatomic) SBRowInfo *row; // @synthesize row=_row;
@property(readonly, nonatomic) SBSectionInfo *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic, getter=isSectionOperand) BOOL sectionOperand;
- (id)initWithSection:(id)arg1 row:(id)arg2;

@end

