/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface MBAggregateDictionary : NSObject {

	NSMutableDictionary* _scalars;

}

@property (nonatomic,readonly) NSDictionary * scalars; 
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)incrementScalarKey:(id)arg1 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)save;
-(void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(NSDictionary *)scalars;
-(void)addCountAndSizeOfFile:(id)arg1 ;
-(void)addFileSize:(unsigned long long)arg1 containerID:(id)arg2 aggregateDictionaryGroup:(id)arg3 ;
@end

