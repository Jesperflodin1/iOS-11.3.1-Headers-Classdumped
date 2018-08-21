/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (nonatomic,retain) NSString * tzid; 
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
-(id)description;
-(id)initWithValue:(id)arg1 ;
-(id)components;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(void)setTzid:(NSString *)arg1 ;
-(BOOL)hasFloatingTimeZone;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(BOOL)hasTimeComponent;
-(NSString *)tzid;
@end
