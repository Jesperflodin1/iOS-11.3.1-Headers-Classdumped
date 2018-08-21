/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MusicProductDescription : NSObject <NSCopying> {

	long long _format;
	NSString* _text;
	NSString* _storeEditorNotes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * storeEditorNotes;              //@synthesize storeEditorNotes=_storeEditorNotes - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(long long)format;
-(id)initWithText:(id)arg1 ;
-(id)initWithStoreEditorNotes:(id)arg1 ;
-(NSString *)storeEditorNotes;
@end

