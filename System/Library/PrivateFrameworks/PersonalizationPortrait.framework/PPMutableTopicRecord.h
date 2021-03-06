/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPTopicRecord.h>

@class PPTopic, PPSource, NSString;

@interface PPMutableTopicRecord : PPTopicRecord

@property (nonatomic,retain) PPTopic * topic; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (assign,nonatomic) BOOL isLocal; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned long long extractionAssetVersion; 
-(id)init;
-(void)setSource:(PPSource *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setExtractionAssetVersion:(unsigned long long)arg1 ;
-(void)setTopic:(PPTopic *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(void)setDecayRate:(double)arg1 ;
@end

