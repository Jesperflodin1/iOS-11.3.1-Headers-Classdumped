/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSWPSmartField.h>
#import <iWorkImport/TSWPCitationRecordHosting.h>

@protocol TSWPCitationSmartFieldEditing;
@class NSArray, NSString;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {

	NSArray* _citationRecords;
	BOOL _isLocalizable;
	id<TSWPCitationSmartFieldEditing> _editingDelegate;

}

@property (nonatomic,copy) NSArray * citationRecords; 
@property (assign,nonatomic) BOOL isLocalizable; 
@property (assign,nonatomic) id<TSWPCitationSmartFieldEditing> editingDelegate;              //@synthesize editingDelegate=_editingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidCitationField:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)supportsDeepCopyForUndo;
-(NSArray *)citationRecords;
-(void)setCitationRecords:(NSArray *)arg1 ;
-(id)bibliographySmartField;
-(void)setEditingDelegate:(id<TSWPCitationSmartFieldEditing>)arg1 ;
-(id<TSWPCitationSmartFieldEditing>)editingDelegate;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(BOOL)isLocalizable;
-(void)setIsLocalizable:(BOOL)arg1 ;
@end
