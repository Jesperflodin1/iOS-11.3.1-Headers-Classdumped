/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface VNClustererOptions : NSObject {

	float _threshold;
	NSString* _type;
	NSString* _cachePath;
	NSData* _state;

}

@property (nonatomic,retain) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * cachePath;              //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,retain) NSData * state;                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float threshold;                   //@synthesize threshold=_threshold - In the implementation block
-(id)init;
-(NSData *)state;
-(void)setState:(NSData *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(void)setCachePath:(NSString *)arg1 ;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(NSString *)cachePath;
@end

