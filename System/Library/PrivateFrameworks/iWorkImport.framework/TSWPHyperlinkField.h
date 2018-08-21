/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSURL, NSString, TSWPSelection;

@interface TSWPHyperlinkField : TSWPSmartField {

	NSURL* _url;
	NSString* _displayTextForChangeTracking;

}

@property (nonatomic,readonly) TSWPSelection * highlightSelection; 
@property (setter=setURL:,nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) NSString * displayText; 
@property (nonatomic,readonly) NSString * displayTextForChangeTracking;              //@synthesize displayTextForChangeTracking=_displayTextForChangeTracking - In the implementation block
@property (nonatomic,readonly) BOOL isInGroupedShape; 
+(BOOL)schemeIsValidForURL:(id)arg1 ;
+(BOOL)schemeIsValidForURLReference:(id)arg1 ;
+(id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)defaultFileURL;
+(id)defaultMailURL;
+(id)newURLFromURLReference:(id)arg1 ;
+(id)urlReferenceFromURL:(id)arg1 ;
+(int)schemeFromURL:(id)arg1 ;
+(id)defaultFieldStyleIdentifier;
+(id)defaultWebURL;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(HyperlinkFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const HyperlinkFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(int)smartFieldKind;
-(TSWPSelection *)highlightSelection;
-(void)p_performHyperlinkSelector:(SEL)arg1 onStorage:(id)arg2 ;
-(BOOL)isInGroupedShape;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2 ;
-(NSString *)displayTextForChangeTracking;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(int)scheme;
-(BOOL)isFileURL;
-(void)setURL:(id)arg1 ;
-(BOOL)allowsEditing;
-(NSString *)displayText;
-(id)filePath;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)initWithContext:(id)arg1 url:(id)arg2 ;
-(id)urlReference;
-(void)setURLReference:(id)arg1 ;
-(id)urlPrefix;
-(BOOL)hasDisplayText;
-(id)fullPath;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
@end

