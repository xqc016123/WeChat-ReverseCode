//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContactBaseSelectListViewController.h"

#import "ContactSelectListViewControllerDelegate-Protocol.h"
#import "ContactsAuthorityManageModifyContactLogicDelegate-Protocol.h"

@class ContactTagData, ContactsAuthorityManageModifyContactLogic, MMUIView, NSArray, NSString, UIImageView;
@protocol ContactsAuthorityManageAddContactViewControllerDelegate;

@interface ContactsAuthorityManageAddContactViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate, ContactsAuthorityManageModifyContactLogicDelegate>
{
    MMUIView *m_bottomToolView;
    NSArray *m_arrReloadContact;
    ContactsAuthorityManageModifyContactLogic *m_newContactFunctionTagAddContactLogic;
    _Bool _isCreateMode;
    _Bool _isSelected;
    unsigned int _m_newContactTagAddContactScene;
    UIImageView *m_selectedImageView;
    NSArray *_m_chatRoomContactList;
    NSArray *_m_tagDataList;
    id <ContactsAuthorityManageAddContactViewControllerDelegate> _delegate;
    ContactTagData *_m_contactTagData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isCreateMode; // @synthesize isCreateMode=_isCreateMode;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData=_m_contactTagData;
@property(nonatomic) __weak id <ContactsAuthorityManageAddContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_newContactTagAddContactScene; // @synthesize m_newContactTagAddContactScene=_m_newContactTagAddContactScene;
@property(retain, nonatomic) NSArray *m_tagDataList; // @synthesize m_tagDataList=_m_tagDataList;
@property(retain, nonatomic) NSArray *m_chatRoomContactList; // @synthesize m_chatRoomContactList=_m_chatRoomContactList;
@property(retain, nonatomic) UIImageView *m_selectedImageView; // @synthesize m_selectedImageView;
- (void)reloadAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)onNewContactAuthorityAddContactSuccess:(id)arg1;
- (id)getViewController;
- (void)onDone:(id)arg1;
- (void)onClickAddBtn;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(_Bool)arg2;
- (id)getReloadContactDataList;
- (void)setOrCancelAllSelectedContact:(_Bool)arg1;
- (_Bool)isContactExisted:(id)arg1;
- (void)updateImageView;
- (void)updatePanelBtn;
- (double)getTableViewHeight;
- (id)getButton:(id)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)initBottomToolView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
