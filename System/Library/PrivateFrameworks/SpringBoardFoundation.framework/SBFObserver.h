/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBFObserver : NSObject
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
@end

