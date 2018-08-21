/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class WebFrame, DOMHTMLFormElement, NSString, DOMDocument, NSURL;

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (nonatomic,readonly) WebFrame * contentFrame; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * code; 
@property (copy) NSString * align; 
@property (copy) NSString * archive; 
@property (copy) NSString * border; 
@property (copy) NSString * codeBase; 
@property (copy) NSString * codeType; 
@property (copy) NSString * data; 
@property (assign) BOOL declare; 
@property (copy) NSString * height; 
@property (assign) int hspace; 
@property (copy) NSString * name; 
@property (copy) NSString * standby; 
@property (copy) NSString * type; 
@property (copy) NSString * useMap; 
@property (assign) int vspace; 
@property (copy) NSString * width; 
@property (readonly) DOMDocument * contentDocument; 
@property (copy,readonly) NSURL * absoluteImageURL; 
-(void)setArchive:(NSString *)arg1 ;
-(NSString *)codeBase;
-(void)setCodeBase:(NSString *)arg1 ;
-(int)hspace;
-(void)setHspace:(int)arg1 ;
-(int)vspace;
-(void)setVspace:(int)arg1 ;
-(DOMDocument *)contentDocument;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(void)setCodeType:(NSString *)arg1 ;
-(BOOL)declare;
-(void)setDeclare:(BOOL)arg1 ;
-(NSString *)standby;
-(void)setStandby:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)code;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(NSString *)height;
-(DOMHTMLFormElement *)form;
-(NSURL *)absoluteImageURL;
-(NSString *)width;
-(void)setWidth:(NSString *)arg1 ;
-(void)setHeight:(NSString *)arg1 ;
-(WebFrame *)contentFrame;
-(NSString *)codeType;
-(void)setCode:(NSString *)arg1 ;
-(NSString *)archive;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)align;
-(NSString *)border;
-(void)setBorder:(NSString *)arg1 ;
@end

