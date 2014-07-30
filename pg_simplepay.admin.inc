<?php

/**
 * @file
 * Simple Pay Settings.
 */

/**
 * Configure default settings for Simple Pay.
 */
function pg_simplepay_common() {
  $form['pg_simplepay_position'] = array(
    '#type' => 'select',
    '#title' => t('Symbol position'),
    '#default_value' => variable_get('pg_simplepay_position', TRUE),
    '#options' => array(
      TRUE => t('Left'),
      FALSE => t('Right'),
    ),
    '#description' => t('This option places the currency symbol of the left or right side of the price.'),
  );
  $form['pg_simplepay_symbol'] = array(
    '#type' => 'textfield',
    '#title' => t('Symbol'),
    '#default_value' => variable_get('pg_simplepay_symbol', '$'),
    '#description' => t("Please enter symbol of the simplepay currency."),
  );
  $form['pg_simplepay_thousands'] = array(
    '#type' => 'textfield',
    '#title' => t('Thousands separator'),
    '#default_value' => variable_get('pg_simplepay_thousands', ','),
    '#size' => 3,
    '#maxlength' => 5,
    '#description' => t('Enter the sign for the thousands separator.'),
  );
  $form['pg_simplepay_decimal'] = array(
    '#type' => 'textfield',
    '#title' => t('Decimal separator'),
    '#default_value' => variable_get('pg_simplepay_decimal', '.'),
    '#size' => 3,
    '#maxlength' => 5,
    '#description' => t('Enter the sign to seperate real numbers from floating numbers.'),
  );
  $form['pg_simplepay_decimal_places'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of places after the decimal separator'),
    '#default_value' => variable_get('pg_simplepay_decimal_places', 2),
    '#size' => 3,
    '#maxlength' => 5,
    '#description' => t('How many slots are needed after the decimal?'),
  );

  return system_settings_form($form);
}
