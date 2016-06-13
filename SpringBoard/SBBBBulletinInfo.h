//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBRowInfo.h"

@class BBBulletin, NSDate, SBBBSectionInfo, SBItemInfoLayoutCache, UIColor, UIImage, UIViewController;

@interface SBBBBulletinInfo : SBRowInfo
{
    SBBBSectionInfo *_sectionInfo;
    SBItemInfoLayoutCache *_layoutCache;
    UIImage *_attachmentImage;
    struct CGSize _attachmentImageSize;
    float _secondaryTextHeight;
    BOOL _suppressingMessageForPrivacy;
    BOOL _isCachedMessageSuppressionValid;
    UIViewController *_secondaryContentViewController;
    UIColor *_secondaryTextColor;
    NSDate *_effectiveRecencyDate;
    int _relevanceDateFormatStyle;
}

@property(nonatomic) int relevanceDateFormatStyle; // @synthesize relevanceDateFormatStyle=_relevanceDateFormatStyle;
@property(copy, nonatomic) NSDate *effectiveRecencyDate; // @synthesize effectiveRecencyDate=_effectiveRecencyDate;
@property(readonly, nonatomic) UIViewController *secondaryContentViewController; // @synthesize secondaryContentViewController=_secondaryContentViewController;
@property(readonly, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) SBBBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) struct CGSize attachmentImageSize; // @synthesize attachmentImageSize=_attachmentImageSize;
@property(retain, nonatomic) UIImage *attachmentImage; // @synthesize attachmentImage=_attachmentImage;
- (void).cxx_destruct;
- (id)description;
- (void)populateReusableView:(id)arg1;
- (float)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(int)arg2 sectionLocation:(int)arg3;
- (struct CGSize)_effectiveAttachmentImageSize;
- (id)_attachmentImageToDisplay;
- (id)_eventDateLabelForDisplay;
- (id)_eventDateLabel;
- (void)_configureEventDateLabel:(id)arg1;
- (id)_relevanceDateLabel;
- (int)_bbDateFormatStyle;
- (void)_configureRelevanceDateLabel:(id)arg1;
- (id)_relevanceDateLabelDescription;
- (id)_endDate;
- (id)_secondaryTextColor;
- (id)_secondaryContentView;
- (id)_secondaryTextToDisplay;
- (id)_secondaryText;
- (id)_subtitleTextColor;
- (id)_subtitleTextToDisplay;
- (id)_subtitleText;
- (id)_relevanceDateTextColor;
- (id)_primaryTextColor;
- (id)_primaryText;
@property(readonly, nonatomic, getter=isSuppressingMessageForPrivacy) BOOL suppressingMessageForPrivacy; // @synthesize suppressingMessageForPrivacy=_suppressingMessageForPrivacy;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateCachedLayoutData;
- (Class)reusableViewClass;
- (id)identifier;
@property(readonly, nonatomic) BBBulletin *representedBulletin;

@end
