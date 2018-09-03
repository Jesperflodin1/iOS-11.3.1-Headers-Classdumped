//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class NSArray, NSString, NSURL;

@interface AMInstagramActivity : UIActivity <UIDocumentInteractionControllerDelegate>
{
    _Bool _isPerformed;
    NSURL *_videoURL;
    NSArray *_activityItems;
}

+ (long long)activityCategory;
@property(nonatomic) _Bool isPerformed; // @synthesize isPerformed=_isPerformed;
@property(retain, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (id)nilOrFirstImageFromArray:(id)arg1;
- (id)firstStringOrEmptyStringFromArray:(id)arg1;
- (id)currentView;
- (id)documentInteractionControllerForInstagramWithFileURL:(id)arg1 withCaptionText:(id)arg2;
- (void)writeWideoToPhotoAlbum;
- (_Bool)isInstagramInstalled;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)prepareWithActivityItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

