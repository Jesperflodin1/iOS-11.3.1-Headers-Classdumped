/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryHasPurchasesRequest;

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation {

	MPModelLibraryHasPurchasesRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryHasPurchasesRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(MPModelLibraryHasPurchasesRequest *)arg1 ;
-(MPModelLibraryHasPurchasesRequest *)request;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end

