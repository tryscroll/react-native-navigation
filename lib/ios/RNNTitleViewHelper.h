#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNTitleOptions.h"

@interface RNNTitleView : UIView

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UILabel *subtitleLabel;

@end

@interface RNNTitleViewHelper : NSObject


- (instancetype)initWithTitleViewOptions:(RNNOptions*)titleOptions
						 subTitleOptions:(RNNOptions*)subtitleOptions
						  viewController:(UIViewController*)viewController;

-(void)setup;

@end

