/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSCH3DVector;

@interface TSCH3DLight : NSObject <NSCopying> {

	NSString* _name;
	TSCH3DVector* _ambientColor;
	TSCH3DVector* _diffuseColor;
	TSCH3DVector* _specularColor;
	float _intensity;
	TSCH3DVector* _attenuation;
	int _coordinateSpace;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) tvec4<float> ambientColor; 
@property (assign,nonatomic) tvec4<float> diffuseColor; 
@property (assign,nonatomic) tvec4<float> specularColor; 
@property (assign,nonatomic) float intensity;                         //@synthesize intensity=_intensity - In the implementation block
@property (assign,nonatomic) tvec3<float> attenuation; 
@property (assign,nonatomic) int coordinateSpace;                     //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(id)lightClasses;
+(id)light;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)setAttenuation:(tvec3<float>)arg1 ;
-(void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3 ;
-(id)initWithLightArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToLightArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(int)coordinateSpace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCoordinateSpace:(int)arg1 ;
-(void)setDiffuseColor:(tvec4<float>)arg1 ;
-(void)setSpecularColor:(tvec4<float>)arg1 ;
-(tvec4<float>)diffuseColor;
-(tvec4<float>)specularColor;
-(tvec3<float>)attenuation;
-(void)setIntensity:(float)arg1 ;
-(float)intensity;
-(void)setAmbientColor:(tvec4<float>)arg1 ;
-(tvec4<float>)ambientColor;
@end

