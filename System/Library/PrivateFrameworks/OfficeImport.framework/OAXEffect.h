/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXEffect : NSObject
+(void)readOuterShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readPresetShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readGlow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)readShadow:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(void)writeShadowBase:(id)arg1 to:(id)arg2 ;
+(id)presetShadowTypeEnumMap;
+(void)writeOuterShadow:(id)arg1 includeRotateWithShape:(BOOL)arg2 to:(id)arg3 ;
+(void)writePresetShadow:(id)arg1 to:(id)arg2 ;
+(void)writeReflection:(id)arg1 to:(id)arg2 ;
+(void)writeGlow:(id)arg1 to:(id)arg2 ;
+(id)updateIncomingEffects:(id)arg1 ;
+(id)updateOutgoingEffects:(id)arg1 ;
+(id)readEffectsFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(BOOL)isEmpty:(id)arg1 ;
@end

