/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)dealloc;
-(unsigned)target;
-(void)setTarget:(unsigned)arg1 ;
-(void*)context;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setContext:(void*)arg1 ;
-(NSDictionary *)options;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
@end
