/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXAdRequest, SXADBannerView;

@interface SXAdResponse : NSObject {

	SXAdRequest* _request;
	SXADBannerView* _bannerView;

}

@property (nonatomic,retain) SXAdRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SXADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)setRequest:(SXAdRequest *)arg1 ;
-(SXAdRequest *)request;
-(SXADBannerView *)bannerView;
-(void)setBannerView:(SXADBannerView *)arg1 ;
@end

