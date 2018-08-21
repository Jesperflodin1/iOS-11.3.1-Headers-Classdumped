/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAppendToNoteIntentExport.h>

@class INNote, INNoteContent, NSString;

@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (nonatomic,copy,readonly) INNote * targetNote; 
@property (nonatomic,copy,readonly) INNoteContent * content; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(void)setContent:(INNoteContent *)arg1 ;
-(INNoteContent *)content;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setTargetNote:(INNote *)arg1 ;
-(INNote *)targetNote;
-(id)initWithTargetNote:(id)arg1 content:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
@end

