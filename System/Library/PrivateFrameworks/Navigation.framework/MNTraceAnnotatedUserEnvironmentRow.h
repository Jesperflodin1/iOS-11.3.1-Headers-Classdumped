/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNTraceAnnotatedUserEnvironmentRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	long long _environmentType;

}

@property (assign,nonatomic) double startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                    //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) long long environmentType;              //@synthesize environmentType=_environmentType - In the implementation block
-(double)endTimestamp;
-(void)setEndTimestamp:(double)arg1 ;
-(long long)environmentType;
-(void)setEnvironmentType:(long long)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
@end

