/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKDocumentBannerElement, IKCarouselElement, IKBackgroundElement;

@interface IKShowcaseTemplate : IKViewElement

@property (nonatomic,retain,readonly) NSArray * modes; 
@property (nonatomic,retain,readonly) IKDocumentBannerElement * documentBanner; 
@property (nonatomic,retain,readonly) IKCarouselElement * carousel; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) unsigned long long transition; 
-(unsigned long long)transition;
-(IKBackgroundElement *)background;
-(IKDocumentBannerElement *)documentBanner;
-(NSArray *)modes;
-(IKCarouselElement *)carousel;
@end

