/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelLibrarySearchScope, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibrarySearchEntityResultContainer : NSObject {

	MPModelLibrarySearchScope* _scope;
	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	shared_ptr<mlcore::EntityQueryResult>* _entityQueryResult;

}

@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* entityQueryResult;                       //@synthesize entityQueryResult=_entityQueryResult - In the implementation block
@property (nonatomic,copy,readonly) MPModelLibrarySearchScope * scope;                                         //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryEntityTranslationContext * entityTranslationContext;              //@synthesize entityTranslationContext=_entityTranslationContext - In the implementation block
-(MPModelLibrarySearchScope *)scope;
-(id)initWithEntityQueryResult:(shared_ptr<mlcore::EntityQueryResult>*)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3 ;
-(shared_ptr<mlcore::EntityQueryResult>*)entityQueryResult;
-(MPMediaLibraryEntityTranslationContext *)entityTranslationContext;
@end

