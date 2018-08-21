/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactHeaderView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CNPropertyGroupItemDelegate.h>

@protocol CNPropertyCellDelegate;
@class UITableView, NSArray, NSLayoutConstraint, NSString;

@interface CNContactHeaderEditView : CNContactHeaderView <UITableViewDelegate, UITableViewDataSource, CNPropertyGroupItemDelegate> {

	UITableView* _editingTable;
	BOOL _pinToReadableContentGuide;
	NSArray* _editingGroups;
	id<CNPropertyCellDelegate> _namePropertyDelegate;
	NSLayoutConstraint* _tableToTrailingEdgeConstraint;
	NSLayoutConstraint* _tableToTrailingReadableGuideConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * tableToTrailingEdgeConstraint;                       //@synthesize tableToTrailingEdgeConstraint=_tableToTrailingEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableToTrailingReadableGuideConstraint;              //@synthesize tableToTrailingReadableGuideConstraint=_tableToTrailingReadableGuideConstraint - In the implementation block
@property (nonatomic,retain) NSArray * editingGroups;                                                  //@synthesize editingGroups=_editingGroups - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> namePropertyDelegate;                   //@synthesize namePropertyDelegate=_namePropertyDelegate - In the implementation block
@property (assign,nonatomic) BOOL pinToReadableContentGuide;                                           //@synthesize pinToReadableContentGuide=_pinToReadableContentGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 ;
+(id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 delegate:(id)arg4 ;
-(BOOL)hasPhoto;
-(void)setBackgroundColor:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)updateConstraints;
-(void)updateFontSizes;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(CGRect)arg3 shouldAllowTakePhotoAction:(BOOL)arg4 delegate:(id)arg5 ;
-(void)setEditingGroups:(NSArray *)arg1 ;
-(NSLayoutConstraint *)tableToTrailingEdgeConstraint;
-(NSLayoutConstraint *)tableToTrailingReadableGuideConstraint;
-(id<CNPropertyCellDelegate>)namePropertyDelegate;
-(id)_phoneticNameForValue:(id)arg1 property:(id)arg2 ;
-(void)propertyItem:(id)arg1 willChangeValue:(id)arg2 ;
-(void)setEditingGroups:(id)arg1 withUpdate:(BOOL)arg2 ;
-(void)setPinToReadableContentGuide:(BOOL)arg1 ;
-(BOOL)photoIsModified;
-(void)saveContactPhoto;
-(id)selectEditingGroupAtIndex:(unsigned long long)arg1 ;
-(NSArray *)editingGroups;
-(void)setNamePropertyDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(BOOL)pinToReadableContentGuide;
-(void)setTableToTrailingEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableToTrailingReadableGuideConstraint:(NSLayoutConstraint *)arg1 ;
@end

