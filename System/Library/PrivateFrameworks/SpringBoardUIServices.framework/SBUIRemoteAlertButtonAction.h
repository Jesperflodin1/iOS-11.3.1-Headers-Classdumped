/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic,readonly) unsigned long long events; 
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithEvents:(unsigned long long)arg1 ;
-(id)initWithEvents:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)sendResponseWithUnHandledEvents:(unsigned long long)arg1 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(unsigned long long)events;
@end
