/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKCompatibilityDelegate.h>

@class NSString;

@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSageDocumentType:(id)arg1 ;
-(Class)importerClassForType:(id)arg1 path:(id)arg2 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned long long)arg1 ;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(id)nestedDocumentFilename;
@end

