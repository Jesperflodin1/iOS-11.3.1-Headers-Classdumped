/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PRSFeatureVector
@property (nonatomic,retain) NSString * bundle_id; 
@required
+(void)reArrangeOrderedSetBySet:(id)arg1 withInflation:(unsigned long long)arg2 andInflatedMap:(id)arg3;
+(BOOL)doesFeatureExist:(id)arg1;
-(void)cleanup;
-(float)getValueAtIndex:(unsigned long long)arg1;
-(float)getServerFeatureAtIndex:(unsigned long long)arg1;
-(NSString *)bundle_id;
-(void)setExpandedSet:(float*)arg1;
-(void)setValue:(id)arg1 forFeature:(id)arg2;
-(id)getFeaturesAsDictionary;
-(void)setValue:(id)arg1 forFeatureEnum:(unsigned long long)arg2;
-(float)getValueForFeature:(id)arg1;
-(void)resetFeatureValues;
-(id)getExpandedFeatureVectorAsArray;
-(id)getExpandedFeaturesAsDictionary;
-(void)setBundle_id:(id)arg1;

@end

