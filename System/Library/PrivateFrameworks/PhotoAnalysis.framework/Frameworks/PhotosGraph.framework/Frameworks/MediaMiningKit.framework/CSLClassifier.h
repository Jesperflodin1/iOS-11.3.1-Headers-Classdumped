/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface CSLClassifier : NSObject {

	BOOL _tfidf;
	BOOL _scaling;
	NSString* _key;
	NSArray* _maxTf;
	NSDictionary* _df;

}

@property (retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (retain) NSArray * maxTf;                //@synthesize maxTf=_maxTf - In the implementation block
@property (retain) NSDictionary * df;              //@synthesize df=_df - In the implementation block
@property (assign) BOOL tfidf;                     //@synthesize tfidf=_tfidf - In the implementation block
@property (assign) BOOL scaling;                   //@synthesize scaling=_scaling - In the implementation block
+(long long)eventTypeForIdentifier:(id)arg1 ;
+(id)identifierForEventType:(long long)arg1 ;
-(id)init;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setScaling:(BOOL)arg1 ;
-(BOOL)scaling;
-(id)classifyFeatureVector:(id)arg1 ;
-(id)bestCategoriesFromPredictions:(id)arg1 ;
-(void)trainOnFeatureVectors:(id)arg1 ;
-(id)meanOf:(id)arg1 ;
-(NSDictionary *)df;
-(float)evaluateOnTestingVectors:(id)arg1 ;
-(id)standardDeviationOf:(id)arg1 ;
-(id)getDocumentFrequencyFrom:(id)arg1 ;
-(id)getMaxTfFrom:(id)arg1 ;
-(float)getTfIdfForFeature:(id)arg1 maxTf:(float)arg2 sizeCorpus:(int)arg3 frequency:(float)arg4 ;
-(NSArray *)maxTf;
-(void)setMaxTf:(NSArray *)arg1 ;
-(void)setDf:(NSDictionary *)arg1 ;
-(BOOL)tfidf;
-(void)setTfidf:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 ;
@end

