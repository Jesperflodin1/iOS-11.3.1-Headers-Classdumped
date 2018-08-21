/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TSDGLFrameBuffer : NSObject {

	NSArray* _textureConfigs;
	NSDictionary* _namesToTextureDict;
	NSMutableArray* _currentTextureLookupInfoByAttachment;
	NSMutableArray* _desiredTextureLookupInfoByAttachment;
	NSArray* _textureConfigsByAttachment;
	NSArray* _textureLookupInfosByAttachment;
	long long _currentBindingOption;
	unsigned _currentDrawBuffers[1];
	int _currentDrawBufferCount;
	unsigned _currentReadBuffer;
	BOOL _isUsingNonDefaultAttachments;
	BOOL _isBound;
	BOOL _shouldDeleteTexturesOnTeardown;
	unsigned _framebuffer;
	NSString* _name;
	CGSize _frameBufferSize;

}

@property (nonatomic,readonly) unsigned currentGLTexture; 
@property (nonatomic,readonly) NSString * currentGLTextureName; 
@property (nonatomic,readonly) unsigned framebuffer;                           //@synthesize framebuffer=_framebuffer - In the implementation block
@property (nonatomic,readonly) CGSize size;                                    //@synthesize frameBufferSize=_frameBufferSize - In the implementation block
@property (nonatomic,readonly) BOOL isBound;                                   //@synthesize isBound=_isBound - In the implementation block
@property (assign,nonatomic) BOOL shouldDeleteTexturesOnTeardown;              //@synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(int)currentGLFramebufferWithBindingOption:(long long)arg1 ;
+(void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2 ;
+(int)currentGLFramebuffer;
+(void)setCurrentGLFramebuffer:(int)arg1 ;
-(id)p_currentTextureLookupInfoAtAttachment:(unsigned)arg1 ;
-(NSString *)currentGLTextureName;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)teardown;
-(id)initWithSize:(CGSize)arg1 ;
-(void)bindFramebufferWithBindingOption:(long long)arg1 ;
-(BOOL)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned*)arg1 count:(long long)arg2 ;
-(void)p_setDrawBuffersAndReadBuffer;
-(void)p_setFramebufferTextureAtAttachmentIndex:(long long)arg1 bindingOption:(long long)arg2 ;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2 ;
-(long long)currentTextureIndexAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTexturesToNext;
-(CGSize)sizeOfGLTextureNamed:(id)arg1 ;
-(unsigned)framebuffer;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 textureCount:(unsigned long long)arg2 ;
-(void)setupFramebufferIfNecessary;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned)arg2 ;
-(unsigned)currentGLTextureAtAttachment:(unsigned)arg1 ;
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 ;
-(unsigned)GLTextureNamed:(id)arg1 ;
-(unsigned)currentGLTexture;
-(BOOL)isBound;
-(BOOL)shouldDeleteTexturesOnTeardown;
-(void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1 ;
@end

