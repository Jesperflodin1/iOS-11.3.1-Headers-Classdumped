/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface RadioRecentStationsResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
@property (nonatomic,copy,readonly) NSArray * stationGroups; 
-(NSArray *)stationGroups;
-(NSArray *)stationDictionaries;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

