//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBNativeAdView.h"

@class FBNativeAdDetailsView, FBNativeAdHeaderView, NSNumber, UILabel;

@interface FBNativeAdTemplateView : FBNativeAdView
{
    NSNumber *_headerSize;
    NSNumber *_coverImageSize;
    NSNumber *_detailsSize;
    UILabel *_headerTitleLabel;
    UILabel *_headerBodyLabel;
    FBNativeAdHeaderView *_headerView;
    FBNativeAdDetailsView *_detailsView;
}

+ (id)defaultAttributes;
@property(nonatomic) __weak FBNativeAdDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak FBNativeAdHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UILabel *headerBodyLabel; // @synthesize headerBodyLabel=_headerBodyLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) NSNumber *detailsSize; // @synthesize detailsSize=_detailsSize;
@property(retain, nonatomic) NSNumber *coverImageSize; // @synthesize coverImageSize=_coverImageSize;
@property(retain, nonatomic) NSNumber *headerSize; // @synthesize headerSize=_headerSize;
- (void).cxx_destruct;
@property(nonatomic, getter=isBodyTextEnabled) _Bool bodyTextEnabled;
- (void)updateView:(_Bool)arg1;
- (void)constructCallToActionButton;
- (void)constructIconImageView;
- (void)constructBodyView;

@end

