/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDTextureSet, NSLock, NSDictionary;

@interface TSDMagicMoveAnimationMatch : NSObject {

	TSDTextureSet* _morphTexture;
	TSDTextureSet* _morphQueuedTexture;
	TSDTextureSet* _morphQueuedForDeletionTexture;
	NSLock* _morphTextureUpdateLock;
	BOOL _isUsingMorphTexture;
	BOOL _didUseMorphTexture;
	BOOL _hasBeenTornDown;
	BOOL _isMorphMatch;
	BOOL _isTextStyleIdenticalExceptSize;
	BOOL _shouldDisableTextMorphing;
	BOOL _shouldTearDownTextures;
	TSDTextureSet* _outgoingTexture;
	TSDTextureSet* _incomingTexture;
	long long _matchType;
	NSDictionary* _outgoingTextureActionBuildFinalAttributes;

}

@property (nonatomic,retain) TSDTextureSet * outgoingTexture;                                       //@synthesize outgoingTexture=_outgoingTexture - In the implementation block
@property (nonatomic,retain) TSDTextureSet * incomingTexture;                                       //@synthesize incomingTexture=_incomingTexture - In the implementation block
@property (assign,nonatomic) BOOL isMorphMatch;                                                     //@synthesize isMorphMatch=_isMorphMatch - In the implementation block
@property (nonatomic,readonly) BOOL isMatched; 
@property (assign,nonatomic) BOOL isTextStyleIdenticalExceptSize;                                   //@synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableTextMorphing;                                        //@synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing - In the implementation block
@property (assign,nonatomic) long long matchType;                                                   //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSDictionary * outgoingTextureActionBuildFinalAttributes;              //@synthesize outgoingTextureActionBuildFinalAttributes=_outgoingTextureActionBuildFinalAttributes - In the implementation block
@property (assign,nonatomic) BOOL shouldTearDownTextures;                                           //@synthesize shouldTearDownTextures=_shouldTearDownTextures - In the implementation block
+(unsigned long long)magicMoveMorphTexturesPerSecond;
-(BOOL)shouldTearDownTextures;
-(id)initWithMatchType:(long long)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3 ;
-(void)clearMorphTexture;
-(NSDictionary *)outgoingTextureActionBuildFinalAttributes;
-(void)setOutgoingTextureActionBuildFinalAttributes:(NSDictionary *)arg1 ;
-(void)setShouldTearDownTextures:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)teardown;
-(BOOL)isMorphMatch;
-(BOOL)isMatched;
-(TSDTextureSet *)incomingTexture;
-(TSDTextureSet *)outgoingTexture;
-(void)addMorphTexture:(id)arg1 ;
-(id)lockCurrentMorphTexture;
-(void)unlockCurrentMorphTexture;
-(void)setOutgoingTexture:(TSDTextureSet *)arg1 ;
-(void)setIncomingTexture:(TSDTextureSet *)arg1 ;
-(void)setIsMorphMatch:(BOOL)arg1 ;
-(BOOL)isTextStyleIdenticalExceptSize;
-(void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1 ;
-(BOOL)shouldDisableTextMorphing;
-(void)setShouldDisableTextMorphing:(BOOL)arg1 ;
-(void)setMatchType:(long long)arg1 ;
-(long long)matchType;
@end

