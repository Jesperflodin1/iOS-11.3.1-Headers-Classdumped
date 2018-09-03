//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MPNativeAdRendering-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AUNativeAdCollectionViewCell : UICollectionViewCell <MPNativeAdRendering>
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_callToActionLabel;
}

+ (id)nibForAd;
@property(nonatomic) __weak UILabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)nativePrivacyInformationIconImageView;
- (id)nativeMainImageView;
- (id)nativeIconImageView;
- (id)nativeCallToActionTextLabel;
- (id)nativeTitleTextLabel;
- (id)nativeMainTextLabel;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

