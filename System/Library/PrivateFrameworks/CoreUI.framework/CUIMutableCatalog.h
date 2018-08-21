/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICatalog.h>

@interface CUIMutableCatalog : CUICatalog {

	unsigned _checkRespondsTo : 1;
	unsigned _respondsToCheck : 1;

}
-(unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(BOOL*)arg2 ;
-(id)_baseKeyForName:(id)arg1 ;
-(void)insertCGImage:(CGImageRef)arg1 name:(id)arg2 scale:(double)arg3 idiom:(long long)arg4 subtype:(long long)arg5 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3 ;
-(id)initWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(long long)arg4 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
@end

