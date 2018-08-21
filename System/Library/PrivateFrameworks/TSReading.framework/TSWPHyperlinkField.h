/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPSmartField.h>

@class NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {

	NSURL* _url;

}

@property (setter=setURL:,nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) NSString * displayText; 
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
+(id)urlWithEmailAddress:(id)arg1 subject:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(int)scheme;
-(BOOL)isFileURL;
-(void)setURL:(id)arg1 ;
-(BOOL)allowsEditing;
-(NSString *)displayText;
-(id)filePath;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(int)elementKind;
-(id)initWithContext:(id)arg1 url:(id)arg2 ;
-(id)urlReference;
-(void)setURLReference:(id)arg1 ;
-(id)urlPrefix;
-(BOOL)hasDisplayText;
-(id)fullPath;
@end

