/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPIconPack, NSMapTable, NSLock;

@interface VKIconAtlas : NSObject {

	VKPIconPack* _iconPack;
	GEOGenericContainer<md::IconCacheKey, id, std::__1::hash<md::IconCacheKey>, std::__1::equal_to<md::IconCacheKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _artworkPool;
	NSMapTable* _atlasToImages;
	NSLock* _atlasToImagesLock;

}
-(id)init;
-(void)dealloc;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 value:(unsigned)arg2 style:(Style*)arg3 extraStyle:(ExtraStyle*)arg4 contentScale:(double)arg5 size:(long long)arg6 hasText:(BOOL)arg7 includeFullBleedColor:(BOOL)arg8 resourceNames:(id)arg9 ;
-(id)artworkForName:(id)arg1 style:(Style*)arg2 extraStyle:(ExtraStyle*)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(BOOL)arg6 includeFullBleedColor:(BOOL)arg7 resourceNames:(id)arg8 ;
-(id)initWithIconPack:(id)arg1 ;
-(id)_artworkForBaseImage:(CGImageRef)arg1 additionalImage:(CGImageRef)arg2 fullBleedColor:(CGColorRef)arg3 style:(Style*)arg4 extraStyle:(ExtraStyle*)arg5 contentScale:(double)arg6 hasText:(BOOL)arg7 ;
-(CGColorRef)_newFullBleedColorForName:(id)arg1 contentScale:(double)arg2 ;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 longValue:(unsigned long long)arg2 style:(Style*)arg3 extraStyle:(ExtraStyle*)arg4 contentScale:(double)arg5 size:(long long)arg6 includeFullBleedColor:(BOOL)arg7 resourceNames:(id)arg8 ;
-(CGImageRef)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 ;
-(CGImageRef)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2 ;
@end
