/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDSearchQueryDelegate <NSObject>
@optional
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2;

@required
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2;

@end

