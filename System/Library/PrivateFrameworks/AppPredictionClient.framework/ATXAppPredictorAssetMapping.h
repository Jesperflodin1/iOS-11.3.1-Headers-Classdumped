/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {

	NSDictionary* _consumerSubTypeAssetMappings;

}
+(id)sharedInstance;
+(id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3 ;
-(id)init;
-(id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1 ;
-(id)getAtxToolDescription;
@end

