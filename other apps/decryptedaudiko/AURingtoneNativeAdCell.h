//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MPNativeAdRendering-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AURingtoneNativeAdCell : UITableViewCell <MPNativeAdRendering>
{
    UIImageView *_mainImageView;
    UILabel *_mainTitleLabel;
    UILabel *_adTextLabel;
    UILabel *_ctaLabel;
}

@property(retain, nonatomic) UILabel *ctaLabel; // @synthesize ctaLabel=_ctaLabel;
@property(retain, nonatomic) UILabel *adTextLabel; // @synthesize adTextLabel=_adTextLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (id)nativePrivacyInformationIconImageView;
- (id)nativeMainImageView;
- (id)nativeIconImageView;
- (id)nativeCallToActionTextLabel;
- (id)nativeTitleTextLabel;
- (id)nativeMainTextLabel;
- (void)addGreyLineToBottom;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

