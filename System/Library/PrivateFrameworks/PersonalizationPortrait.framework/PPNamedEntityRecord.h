/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class PPNamedEntity, PPSource, NSString;

@interface PPNamedEntityRecord : NSObject <NSCopying, NSMutableCopying> {

	PPNamedEntity* _entity;
	PPSource* _source;
	unsigned long long _algorithm;
	double _initialScore;
	double _decayRate;
	NSString* _extractionOsBuild;
	unsigned long long _extractionAssetVersion;

}

@property (nonatomic,readonly) PPNamedEntity * entity;                                 //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) PPSource * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm;                           //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) double initialScore;                                    //@synthesize initialScore=_initialScore - In the implementation block
@property (nonatomic,readonly) double decayRate;                                       //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion;              //@synthesize extractionAssetVersion=_extractionAssetVersion - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
-(PPNamedEntity *)entity;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(PPSource *)source;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned long long)extractionAssetVersion;
-(unsigned long long)algorithm;
-(double)decayRate;
@end
