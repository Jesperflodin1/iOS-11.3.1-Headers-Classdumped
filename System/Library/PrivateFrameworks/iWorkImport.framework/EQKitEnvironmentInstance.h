/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {

	NSDictionary* mConfig;
	Dictionary* mOperatorDictionary;
	Manager* mFontManager;
	Manager* mKerningManager;
	Config* mLayoutConfig;
	Config* mBlahtexConfig;

}

@property (assign,nonatomic) BOOL kerning; 
+(id)dataForDefaultEnvironment;
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg1 ;
+(id)dataForEnvironment:(id)arg1 ;
-(const Config*)blahtexConfig;
-(void)dealloc;
-(void)setKerning:(BOOL)arg1 ;
-(BOOL)kerning;
-(void)beginLayout;
-(void)endLayout;
-(const Manager*)kerningManager;
-(const Config*)layoutConfig;
-(const Manager*)fontManager;
-(const Dictionary*)operatorDictionary;
-(id)initWithConfig:(id)arg1 ;
-(id)newDictionaryForArchiving;
@end

