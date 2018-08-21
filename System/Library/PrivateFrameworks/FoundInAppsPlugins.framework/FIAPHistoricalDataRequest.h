/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FoundInAppsPlugins/FoundInAppsPlugins-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding> {

	unsigned long long _requestId;
	NSString* _pluginIdentifier;
	NSString* _personHandle;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) unsigned long long requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) NSString * pluginIdentifier;               //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,retain) NSString * personHandle;                     //@synthesize personHandle=_personHandle - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)personHandle;
-(void)setPersonHandle:(NSString *)arg1 ;
-(unsigned long long)requestId;
-(void)setRequestId:(unsigned long long)arg1 ;
-(NSString *)pluginIdentifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)isEqualToHistoricalDataRequest:(id)arg1 ;
-(BOOL)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setPluginIdentifier:(NSString *)arg1 ;
-(BOOL)subsetOfHistoricalDataRequest:(id)arg1 ;
@end

