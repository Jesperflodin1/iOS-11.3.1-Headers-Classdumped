/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAssetResourceLoaderDelegate <NSObject>
@optional
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end
