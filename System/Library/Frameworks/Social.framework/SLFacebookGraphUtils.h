/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLFacebookGraphUtils : NSObject
+(void)_likeURL:(id)arg1 requestMethod:(long long)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_parseServerResponse:(id)arg1 error:(id*)arg2 ;
+(id)_likeQueryStringForURL:(id)arg1 flags:(unsigned long long)arg2 ;
+(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)likeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unlikeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

