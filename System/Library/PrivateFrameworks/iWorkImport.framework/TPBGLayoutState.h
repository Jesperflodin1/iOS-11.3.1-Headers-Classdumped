/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TPBGLayoutState : NSObject {

	BOOL _active;
	NSDate* _startDate;
	long long _suspendCount;

}

@property (nonatomic,copy) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long suspendCount;              //@synthesize suspendCount=_suspendCount - In the implementation block
@property (assign,nonatomic) BOOL active;                         //@synthesize active=_active - In the implementation block
-(long long)suspendCount;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setSuspendCount:(long long)arg1 ;
@end

