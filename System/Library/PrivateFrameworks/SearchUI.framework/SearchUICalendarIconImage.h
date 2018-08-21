/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIAppIconImage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage <NSSecureCoding> {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)generateImageWithFormat:(int)arg1 ;
@end

